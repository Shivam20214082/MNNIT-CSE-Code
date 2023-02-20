//Shivam kumar gupta
//20214082
//CSE-D


import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class registration implements ActionListener {

    JFrame f = new JFrame("Registration Form");
    JLabel l = new JLabel("Registration Form");
    JLabel l0 = new JLabel("Name");
    JLabel l1 = new JLabel("Regesitration Number");
    JLabel l2 = new JLabel("Date of Birth");
    JLabel l3 = new JLabel("Address");
    JLabel l4 = new JLabel("Email Id");
    JLabel l5 = new JLabel("Phone number");
    JTextPane l6 = new JTextPane();
    JTextPane l7 = new JTextPane();

    JTextField t0 = new JTextField();
    JTextField t1 = new JTextField();
    JTextField t2 = new JTextField();
    JTextField t3 = new JTextField();
    JTextField t4 = new JTextField();
    JTextField t5 = new JTextField();

    JButton b1 = new JButton("Clear");
    JButton b2 = new JButton("Submit");

    registration() {
        // setting position
        l.setBounds(50, 0, 120, 40);
        l0.setBounds(50, 50, 120, 20);
        l1.setBounds(50, 80, 120, 20);
        l2.setBounds(50, 110, 120, 20);
        l3.setBounds(50, 140, 120, 20);
        l4.setBounds(50, 170, 120, 20);
        l5.setBounds(50, 200, 120, 20);
        t0.setBounds(200, 50, 120, 20);
        t1.setBounds(200, 80, 120, 20);
        t2.setBounds(200, 110, 120, 20);
        t3.setBounds(200, 140, 120, 20);
        t4.setBounds(200, 170, 120, 20);
        t5.setBounds(200, 200, 120, 20);

        b1.setBounds(50, 240, 80, 20);
        b2.setBounds(150, 240, 80, 20);
        l6.setBounds(50, 300, 300, 250);
        l7.setBounds(400, 300, 100, 20);
        // l6.setEnabled(false);

        f.add(l);
        f.add(l0);
        f.add(t0);
        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(l3);
        f.add(t3);
        f.add(l4);
        f.add(t4);
        f.add(l5);
        f.add(t5);
        f.add(b1);
        f.add(b2);
        f.add(l6);

        b1.addActionListener(this);
        b2.addActionListener(this);

        f.setLayout(null);
        f.setSize(600, 500);
        f.setVisible(true);
    }

    void clear() {
        t0.setText(null);
        t1.setText(null);
        t2.setText(null);
        t3.setText(null);
        t4.setText(null);
        t5.setText(null);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
            clear();
        }

        if (e.getSource() == b2) {
            String sr = "Enterd info.\n\nName ::";
            sr += t0.getText();
            sr += "\nRegistration number ::";
            sr += t1.getText();
            sr += "\nDate of birth ::";
            sr += t2.getText();
            sr += "\nAddress ::";
            sr += t3.getText();
            sr += "\nEmail Id ::";
            sr += t4.getText();
            sr += "\nMobile number ::";
            sr += t5.getText();
            l6.setText(sr);

            // check();
            if (!t0.getText().equals("Shivam")) {
                String m = "message";
                String msg = "You Entered Incorrect Name "+t0.getText();
                JOptionPane.showMessageDialog(b1, msg, m, 0);
                // clear();
            }
            else if (!t1.getText().equals("20214082")) {
                String m = "message";
                String msg = "You Entered Incorrect Registration number";
                JOptionPane.showMessageDialog(b1, msg, m, 0);
            }
            else if (!t2.getText().equals("11/12/2003")) {
                String m = "message";
                String msg = "You Entered Incorrect DOB";
                JOptionPane.showMessageDialog(b1, msg, m, 0);
            }
            else if (!t3.getText().equals("Jaunpur")) {
                String m = "message";
                String msg = "You Entered Incorrect Address";
                JOptionPane.showMessageDialog(b1, msg, m, 0);
            }
            else if (!t4.getText().equals("shivam66jnp@gmail.com")) {
                String m = "message";
                String msg = "You Entered Incorrect Email id";
                JOptionPane.showMessageDialog(b1, msg, m, 0);
            }
            else if (!t5.getText().equals("8736093895")) {
                String m = "message";
                String msg = "You Entered Incorrect Mobile number";
                JOptionPane.showMessageDialog(b1, msg, m, 0);
            }
            else{
                String m = "message";
                String msg = "Welcome";
                JOptionPane.showMessageDialog(b1, msg, m, 0);
            }
        }
    }

    public static void main(String ar[]) {
        new registration();
    }
}
