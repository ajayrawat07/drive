package com.example.bankapp;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    EditText balance, withdraw;
    Button btnWithdraw;
    TextView result;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        balance = findViewById(R.id.balance);
        withdraw = findViewById(R.id.withdraw);
        btnWithdraw = findViewById(R.id.btnWithdraw);
        result = findViewById(R.id.result);

        btnWithdraw.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                double b = Double.parseDouble(
                        balance.getText().toString());

                double w = Double.parseDouble(
                        withdraw.getText().toString());

                if (b >= w) {
                    double remaining = b - w;

                    result.setText("Remaining Balance: " + remaining);
                } else {
                    result.setText("Insufficient Balance");
                }
            }
        });
    }
}