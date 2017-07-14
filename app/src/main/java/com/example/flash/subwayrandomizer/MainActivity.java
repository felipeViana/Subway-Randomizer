package com.example.flash.subwayrandomizer;

import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;

import java.util.Arrays;
import java.util.List;
import java.util.Random;

import static com.example.flash.subwayrandomizer.R.layout.content_main;

public class MainActivity extends AppCompatActivity {

    final List<String> paes = Arrays.asList("9 grãos", "9 grãos com aveia e mel", "italiano", "parmesão e orégano", "3 queijos");
    final List<String> sanduiches = Arrays.asList("beef bacon chipotle", "B.M.T.", "frango", "presunto",
            "rosbife", "steak cheddar cremoso", "carne e queijo", "subway club", "steak churrasco",
            "subway melt", "atum", "peito de peru", "vegetariano", "frango defumado com cream cheese");
    final List<String> queijos = Arrays.asList("cheddar", "prato", "suíço");
    final List<String> vegetais = Arrays.asList("alface", "tomate", "pepinos", "pimentão verde", "cebola", "azeitona", "picles");
    final List<String> molhos = Arrays.asList("mostarda e mel", "cebola agridoce", "barbecue", "parmesão", "chipotle", "mostarda", "maionese");

    Random rand = new Random();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
    }

    public void buttonOnClick(View v){
        Button button1 = (Button) v;
        ((Button) v).setText("Gerar outro?");

        TextView textView1 = (TextView) findViewById(R.id.textView);
        textView1.setText("Aqui está o seu sanduíche\n\n" +
                "Pão:\n" +
                paes.get(rand.nextInt(paes.size()))+"\n\n" +

                "Sanduíche:\n"+
                sanduiches.get(rand.nextInt(sanduiches.size()))+"\n\n" +

                "Queijo:\n"+
                queijos.get(rand.nextInt(queijos.size()))+"\n\n"+

                "Vegetais:\n"+
                vegetais.get(rand.nextInt(vegetais.size()))+"\n\n"+

                "Molhos:\n"+
                molhos.get(rand.nextInt(molhos.size()))+"\n\n"+

                "");
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        return super.onOptionsItemSelected(item);
    }
}
