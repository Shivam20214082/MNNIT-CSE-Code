//Shivam kumar gupta
//20214082
//CSE-D

import javax.swing.*;
// import java.awt.*;
import java.awt.event.*;
import java.lang.Math;

class calculator implements ActionListener {
    double last;
    // Declaring Objects
    JFrame f = new JFrame();
    JLabel l0 = new JLabel("To performed Unary operation");// this is for log,and other function
    JLabel l1 = new JLabel("First Number");
    JLabel l2 = new JLabel("Second Number");
    JLabel l3 = new JLabel("Result");

    JTextField t1 = new JTextField();
    JTextField t2 = new JTextField();
    JTextField t3 = new JTextField();

    JButton b0 = new JButton("click here");
    JButton b1 = new JButton("+");
    JButton b2 = new JButton("-");
    JButton b3 = new JButton("*");
    JButton b4 = new JButton("/");
    JButton b9 = new JButton("sin");
    JButton b6 = new JButton("cos");
    JButton b7 = new JButton("tan");
    JButton b8 = new JButton("log");
    JButton b10 = new JButton("exp.");
    JButton b5 = new JButton("Cancel");


    public void off(){
        b6.setEnabled(false);
        b7.setEnabled(false);
        b8.setEnabled(false);
        b9.setEnabled(false);
        b10.setEnabled(false);
    }
    public void on(){
        b6.setEnabled(true);
        b7.setEnabled(true);
        b8.setEnabled(true);
        b9.setEnabled(true);
        b10.setEnabled(true);
    }

    calculator() {
        // Giving Coordinates
        l0.setBounds(50, 50, 200, 20);
        l1.setBounds(50, 100, 100, 20);
        l2.setBounds(50, 140, 100, 20);
        l3.setBounds(50, 180, 100, 20);

        t1.setBounds(200, 100, 100, 20);
        t2.setBounds(200, 140, 100, 20);
        t3.setBounds(200, 180, 100, 20);
        t3.setEditable(false);

        b0.setBounds(280, 50, 100, 20);
        b0.addActionListener(this);
        b1.setBounds(50, 250, 80, 20);
        b2.setBounds(140, 250, 80, 20);
        b3.setBounds(230, 250, 80, 20);
        b4.setBounds(320, 250, 80, 20);
        b5.setBounds(410, 250, 80, 20);
        b6.setBounds(50, 300, 80, 20);
        b7.setBounds(140, 300, 80, 20);
        b8.setBounds(230, 300, 80, 20);
        b9.setBounds(320, 300, 80, 20);
        b10.setBounds(410, 300, 80, 20);

        b6.setEnabled(false);
        b7.setEnabled(false);
        b8.setEnabled(false);
        b9.setEnabled(false);
        b10.setEnabled(false);

        // Adding components to the frame
        f.add(l0);
        f.add(l1);
        f.add(l2);
        f.add(l3);

        f.add(t1);
        f.add(t2);
        f.add(t3);

        f.add(b0);
        f.add(b1);
        f.add(b2);
        f.add(b3);
        f.add(b4);
        f.add(b5);
        f.add(b6);
        f.add(b7);
        f.add(b8);
        f.add(b9);
        f.add(b10);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);
        b10.addActionListener(this);

        f.setLayout(null);
        f.setVisible(true);
        f.setSize(600, 450);
    }

    public void actionPerformed(ActionEvent e) throws NumberFormatException {
        if (e.getSource() == b0) {
            int n3=0;
            t2.setText(String.valueOf(n3));
            // t1.setText(String.valueOf(n3));
            t2.setEditable(false);
            on();  
        }
        Double n1 = Double.parseDouble(t1.getText());
        Double n2 = Double.parseDouble(t2.getText());
        

        
        //performing unary operation
        if (e.getSource() == b9) {
            double x=Math.round(Math.sin(n1) *100)/100.0;
            t3.setText(String.valueOf(x));
            t2.setEditable(true);
            off();
        }
        if (e.getSource() == b10) {
            double x=Math.round(Math.exp(n1) *100)/100.0;
            t3.setText(String.valueOf(x));
            t2.setEditable(true);
            off();
        }
        if (e.getSource() == b8) {
            double x=Math.round(Math.log10(n1) *100)/100.0;
            t3.setText(String.valueOf(x));
            t2.setEditable(true);
            off();
        }
        if (e.getSource() == b7) {
            double x=Math.round(Math.tan(n1) *100)/100.0;
            t3.setText(String.valueOf(x));
            t2.setEditable(true);
            off();
        }
        if (e.getSource() == b6) {
            double x=Math.round(Math.cos(n1) *100)/100.0;
            t3.setText(String.valueOf(x));
            t2.setEditable(true);
            off();
        }

        if (e.getSource() == b1) {
            t3.setText(String.valueOf(n1 + n2));
        }

        if (e.getSource() == b2) {
            t3.setText(String.valueOf(n1 - n2));
        }

        if (e.getSource() == b3) {
            t3.setText(String.valueOf(n1 * n2));
        }

        if (e.getSource() == b4) {
            t3.setText(String.valueOf(n1 / n2));
        }

        if (e.getSource() == b5) {
            System.exit(0);
        }
    }

    public static void main(String... s) {
        new calculator(); // Initialize calculator
    }
}