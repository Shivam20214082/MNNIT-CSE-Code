//Shivam kumar gupta
//20214082
//CSE-D

import java.awt.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
// import javax.swing.text.StyledEditorKit.BoldAction;

public class Sudokuu implements ActionListener {
    public JFrame f;
    JButton o,check;
    JPanel field;
    JPanel p;
    JTextField tf[] = new JTextField[81];

    Sudokuu() {
        f = new JFrame("Sudoku");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        p = new JPanel();
        p.setBorder(BorderFactory.createLineBorder(Color.cyan));
        p.setPreferredSize(new Dimension(700, 50));
        p.setVisible(true);
        p.setLayout(new FlowLayout());
        o = new JButton("Restart");
        o.setPreferredSize(new Dimension(200, 50));
        check = new JButton("check");
        check.setPreferredSize(new Dimension(200, 50));
        p.add(o);
        p.add(check);
        check.addActionListener(this);
        o.addActionListener(this);
        field = new JPanel();
        field.setLayout(new GridLayout(0, 9));
        field.setPreferredSize(new Dimension(500, 500));
        f.add(p, BorderLayout.PAGE_START);

        for (int i = 0; i < 81; i++) {
            tf[i] = new JTextField("", 1);
            tf[i].setBackground(Color.GREEN);
            tf[i].setForeground(Color.RED);
        }
        for (int i = 0; i < 81; i++) {
            tf[i].setBorder(new LineBorder(Color.black, 2));
        }
        for (int i = 0; i < 81; i++) {
            field.add(tf[i]);
            tf[i].addActionListener(this);
        }
        
        // field.setSize(800, 800);
        f.add(field, BorderLayout.CENTER);
        f.pack();
        f.setVisible(true);
    }
    void check(){
        for (int i = 0; i < 81; i++) {
            // field.add(tf[i]);
            if (tf[i].getText() != null) {
                int row = i / 9;
                int coloumn = i % 9;
                int n = Integer.parseInt(tf[i].getText());
                for (int j = row * 9; i < row * 9 + 9  ; i++) {
                    if (tf[j].getText().equals(tf[i].getText())) {
                        tf[i].setText(null);
                        String m = "message";
                        String msg = "Invalid";
                        JOptionPane.showMessageDialog(tf[i], msg, m, 0);
                        // clear();
                        break;
                    }
                }
                for (int j = coloumn; i < 81 ; i=i+9) {
                    if (tf[j].getText().equals(tf[i].getText())) {
                        tf[i].setText(null);
                        String m = "message";
                        String msg = "Invalid";
                        JOptionPane.showMessageDialog(tf[i], msg, m, 0);
                        // clear();
                        break;
                    }
                }
                if(n>9 || n<=0){
                    tf[i].setText(null);
                        String m = "message";
                        String msg = "Invalid";
                        JOptionPane.showMessageDialog(tf[i], msg, m, 0);
                        // clear();
                        break;
                }
            }
        }
    }

    void clear() {
        for (int i = 0; i < 81; i++) {
            tf[i].setText(null);
        }
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == o) {
            clear();
        }
        if(e.getSource()==check){
            check();
        }
    }

    public static void main(String[] args) {
        new Sudokuu();
    }
}