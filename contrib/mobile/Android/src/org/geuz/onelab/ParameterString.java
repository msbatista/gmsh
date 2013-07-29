package org.geuz.onelab;

import java.util.ArrayList;

import android.content.Context;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.KeyEvent;
import android.view.View;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.Spinner;

public class ParameterString extends Parameter{
	
	private  String _kind;
	private int _index;
	private ArrayList<String> _choices;
	private ArrayAdapter<String> _adapter;
	private Spinner _spinner;
	private EditText _edittext;
	
	public ParameterString(Context context, Gmsh gmsh, mGLSurfaceView glView, String name) {
		super(context, gmsh, glView, name);
		_choices = new ArrayList<String>();
		_choices.add("-"); // Default choice
	}

	private void createSpinner()
	{
		if(_spinner != null) return;
		_spinner = new Spinner(_context);
		_adapter = new ArrayAdapter<String>(_context, android.R.layout.simple_spinner_dropdown_item, _choices);
		_adapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
		_spinner.setAdapter(_adapter);
	}
	
	protected void update(){
		super.update();
		if(_spinner != null)
			_spinner.setSelection(_index);
		else if(_edittext != null && _choices.size() > 0)
			_edittext.setText(_choices.get(0));
	}
	
	public void setValue(int index) {if(index != _index)_changed = true;_index = index;this.update();}
	public void setValue(String value) {
		int index = _choices.indexOf(value);
		if(index < 0) { // the value is not in the list, add it
			this.addChoices(value);
			index = _choices.indexOf(value);
		}
		if(index != _index)_changed = true;
		_index = index;this.update();
	}
	public void setKind(String kind) {_kind = kind;}
	public void addChoices(String choice) {
		if(_edittext == null && _spinner == null) createSpinner();
		for(String c : _choices) // do not add a duplicate value
			if(c.equals(choice))return;
		if(_choices.get(0).equals("-")) // remove the default choice with the first added choice
			_choices.remove(0);
		_choices.add(choice);
		this.update();
	}
	public String getValue() {if( _index < 0) return "";return _choices.get(_index);}
	public String getKind() {return _kind;}
	public int getIndex() {return _index;}
	public ArrayList<String> getChoices() {return _choices;}
	public int fromString(String s){
		int pos = super.fromString(s);
		if(pos <= 0) return -1; // error
		String[] infos = s.split("\n");
		String value = infos[pos++];
		setKind(infos[pos++]); // generic file 
		if(_kind.equals("file"))
			return -1;
		int nChoices = Integer.parseInt(infos[pos++]);
		if(nChoices < 1 && _kind.equals("generic"))
			_edittext = new EditText(_context);
		for(int i=0;i<nChoices;i++) this.addChoices(infos[pos++]);
		// ...
		setValue(value);
		this.update();
		return pos;
	}
	public String getType(){return "ParameterString";}
	public LinearLayout getView() {
		LinearLayout paramLayout = new LinearLayout(_context);
		paramLayout.setOrientation(LinearLayout.VERTICAL);
		paramLayout.addView(_title);
		if(_spinner != null){
			paramLayout.addView(_spinner);
			_spinner.setEnabled(!_readOnly);
			_spinner.setOnFocusChangeListener(new View.OnFocusChangeListener() {
				
				public void onFocusChange(View v, boolean hasFocus) {
					if(_listView != null) _listView.refresh();
				}
			});
			_spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {

				public void onNothingSelected(AdapterView<?> arg0) {}

				public void onItemSelected(AdapterView<?> parent, View view,
						int pos, long id) {
					setValue(pos);
					_gmsh.setParam(getType(), getName(), String.valueOf(getValue()));
					if(_gmsh.onelabCB("check") == 1 && _glView != null)
						_glView.requestRender();
					if(_listView != null) _listView.refresh();
				}

			});
		}
		else if(_edittext != null){
			paramLayout.addView(_edittext);
			_edittext.setEnabled(!_readOnly);
			_edittext.setOnKeyListener(new View.OnKeyListener() {
				
				public boolean onKey(View v, int keyCode, KeyEvent event) {
					if(keyCode == KeyEvent.KEYCODE_ENTER){ // hide the keyboard
						InputMethodManager imm = (InputMethodManager)_context.getSystemService(
							      Context.INPUT_METHOD_SERVICE);
							imm.hideSoftInputFromWindow(_edittext.getWindowToken(), 0);
							_edittext.clearFocus();
						return true;
					}
					return false;
				}
			});
			_edittext.addTextChangedListener(new TextWatcher() {
				
				public void onTextChanged(CharSequence s, int start, int before, int count) {
					if(_listView != null) _listView.refresh();
				}
				
				public void beforeTextChanged(CharSequence s, int start, int count,
						int after) {} // UNUSED Auto-generated method stub
				
				public void afterTextChanged(Editable s) {
					_gmsh.setParam(getType(), getName(), _choices.get(0));
				}
			});
		}
		return paramLayout;
	}
	
}
