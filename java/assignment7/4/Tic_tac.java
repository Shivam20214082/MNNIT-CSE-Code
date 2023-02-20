//Shivam kumar gupta
//20214082
//CSE-D

import javax.swing.*;
// import javax.swing.event.AncestorListener;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Tic_tac implements ActionListener {
    int c = 0;
    JFrame f = new JFrame("TIC-TAC Game");
    JButton b[] = new JButton[9];
    JButton close, restart;
    JLabel p, p0, p1, p2, turn;
    JTextField t1, t2, t3;

    void checkWinner() {
        for (int a = 0; a < 8; a++) {
            String line = null;

            switch (a) {
                case 0:
                    line = b[0].getText() + b[1].getText() + b[2].getText();
                    break;
                case 1:
                    line = b[3].getText() + b[4].getText() + b[5].getText();
                    break;
                case 2:
                    line = b[6].getText() + b[7].getText() + b[8].getText();
                    break;
                case 3:
                    line = b[0].getText() + b[3].getText() + b[6].getText();
                    break;
                case 4:
                    line = b[1].getText() + b[4].getText() + b[7].getText();
                    break;
                case 5:
                    line = b[2].getText() + b[5].getText() + b[8].getText();
                    break;
                case 6:
                    line = b[0].getText() + b[4].getText() + b[8].getText();
                    break;
                case 7:
                    line = b[2].getText() + b[4].getText() + b[6].getText();
                    break;
            }
            // For X winner
            if (line.equals("XXX")) {
                int d = Integer.parseInt(t1.getText()) + 1;
                t1.setText(String.valueOf(d));
                String m = "message";
                String msg = "Player no. 1 Won";
                JOptionPane.showMessageDialog(b[0], msg, m, 0);
            }

            // For O winner
            else if (line.equals("OOO")) {
                int d = Integer.parseInt(t2.getText()) + 1;
                t2.setText(String.valueOf(d));
                String m = "message";
                String msg = "Player no. 2 Won";
                JOptionPane.showMessageDialog(b[0], msg, m, 0);
            } else if (c == 10) {
                String m = "message";
                String msg = "Draw";
                JOptionPane.showMessageDialog(b[0], msg, m, 0);
                clear();
            }
        }
    }

    Tic_tac() {
        for (int i = 0; i < 9; i++) {
            b[i] = new JButton();
        }
        close = new JButton("Close");
        restart = new JButton("Restart");
        p0 = new JLabel("Tic-Tac Game");
        p = new JLabel("Result:: ");
        p2 = new JLabel("Player 2");
        p1 = new JLabel("Player 1");
        turn = new JLabel("Current Move is of Player number");
        t1 = new JTextField("0");
        t2 = new JTextField("0");
        t3 = new JTextField("1");

        // position setting
        p0.setBounds(80, 40, 150, 20);
        turn.setBounds(40, 80, 150, 20);
        t3.setBounds(220, 80, 150, 20);
        close.setBounds(180, 250, 100, 20);
        restart.setBounds(40, 250, 100, 20);

        b[0].setBounds(20, 100, 60, 60);
        b[1].setBounds(80, 100, 60, 60);
        b[2].setBounds(140, 100, 60, 60);
        b[3].setBounds(20, 160, 60, 60);
        b[4].setBounds(80, 160, 60, 60);
        b[5].setBounds(140, 160, 60, 60);
        b[6].setBounds(20, 220, 60, 60);
        b[7].setBounds(80, 220, 60, 60);
        b[8].setBounds(140, 220, 60, 60);
        p.setBounds(40, 300, 100, 20);
        p1.setBounds(40, 330, 100, 20);
        p2.setBounds(40, 360, 100, 20);
        t1.setBounds(160, 330, 100, 20);
        t2.setBounds(160, 360, 100, 20);
        close.setBounds(160, 400, 100, 20);
        restart.setBounds(40, 400, 100, 20);

        close.addActionListener(this);
        restart.addActionListener(this);

        f.add(p0);
        f.add(turn);
        f.add(t3);
        for (int i = 0; i < 9; i++) {
            b[i].addActionListener(this);
            f.add(b[i]);
        }
        f.add(p);
        f.add(p1);
        f.add(p2);
        f.add(t1);
        f.add(t2);
        f.add(close);
        f.add(restart);
        f.setSize(800, 800);
        f.setLayout(null);
        f.setVisible(true);

        // f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    void clear() {
        for (int i = 0; i < 9; i++) {
            b[i].setText(null);
            b[i].setEnabled(true);
        }
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == close) {
            c = 0;
            System.exit(0);
        }
        t3.setText(String.valueOf((((c + 1) % 2) + 1)));
        if (e.getSource() == b[0]) {
            if (++c % 2 != 0) {
                b[0].setText("X");
                b[0].setEnabled(false);
                checkWinner();
            }
            else {
                b[0].setText("O");
                b[0].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[1]) {
            if (++c % 2 != 0) {
                b[1].setText("X");
                b[1].setEnabled(false);
                checkWinner();
            }
            else {
                b[1].setText("O");
                b[1].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[2]) {
            if (++c % 2 != 0) {
                b[2].setText("X");
                b[2].setEnabled(false);
                checkWinner();
            }
            else {
                b[2].setText("O");
                b[2].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[3]) {
            if (++c % 2 != 0) {
                b[3].setText("X");
                b[3].setEnabled(false);
                checkWinner();
            }
            else {
                b[3].setText("O");
                b[3].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[4]) {
            if (++c % 2 != 0) {
                b[4].setText("X");
                b[4].setEnabled(false);
                checkWinner();
            }
            else {
                b[4].setText("O");
                b[4].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[5]) {
            if (++c % 2 != 0) {
                b[5].setText("X");
                b[5].setEnabled(false);
                checkWinner();
            }
            else {
                b[5].setText("O");
                b[5].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[6]) {
            if (++c % 2 != 0) {
                b[6].setText("X");
                b[6].setEnabled(false);
                checkWinner();
            }
            else {
                b[6].setText("O");
                b[6].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[7]) {
            if (++c % 2 != 0) {
                b[7].setText("X");
                b[7].setEnabled(false);
                checkWinner();
            }
            else {
                b[7].setText("O");
                b[7].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == b[8]) {
            if (++c % 2 != 0) {
                b[8].setText("X");
                b[8].setEnabled(false);
                checkWinner();
            }
            else {
                b[8].setText("O");
                b[8].setEnabled(false);
                checkWinner();
            }
        }
        if (e.getSource() == restart) {
            c=0;
            clear();
        }

    }

    public static void main(String ar[]) {
        new Tic_tac();
    }

}
