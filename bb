package com.example.bankapp;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    EditText code;
    Button check;
    TextView result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        code = findViewById(R.id.code);
        check = findViewById(R.id.check);
        result = findViewById(R.id.result);

        check.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                String input = code.getText().toString().toUpperCase();

                if (input.equals("D")) {
                    result.setText("Deposit Transaction");
                }
                else if (input.equals("W")) {
                    result.setText("Withdrawal Transaction");
                }
                else if (input.equals("T")) {
                    result.setText("Transfer Transaction");
                }
                else {
                    result.setText("Invalid Transaction Code");
                }
            }
        });
    }
}