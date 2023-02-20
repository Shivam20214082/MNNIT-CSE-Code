//Shivam kumar gupta
//20214082
//CSE-D

import javax.swing.*;
import java.io.*;

import java.awt.event.*;
import java.awt.*;

public class menu implements ActionListener {

    JFrame f = new JFrame("Simple Editor");
    JMenuBar mb = new JMenuBar();
    JMenu File, Edit;
    JMenuItem Open, Save, New, Print, Cut, Copy, Paste, Close;
    JTextArea area;
    JLabel l;
    JScrollPane scroll;

    menu() {
        File = new JMenu("File");
        Edit = new JMenu("Edit");
        Open = new JMenuItem("Open");
        Save = new JMenuItem("Save");
        New = new JMenuItem("New");
        Print = new JMenuItem("Print");
        Cut = new JMenuItem("Cut");
        Copy = new JMenuItem("Copy");
        Paste = new JMenuItem("Paste");
        Close = new JMenuItem("Close");
        area = new JTextArea(50, 50);
        area.setBounds(10, 10, 1600, 800);

        // scrollpane
        scroll = new JScrollPane(area);
        scroll.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        scroll.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);
        f.add(scroll);

        Open.addActionListener(this);
        Save.addActionListener(this);
        Close.addActionListener(this);
        Print.addActionListener(this);
        Cut.addActionListener(this);
        Copy.addActionListener(this);
        Paste.addActionListener(this);
        New.addActionListener(this);

        File.add(Open);
        File.add(Save);
        f.add(area);
        File.add(Print);
        File.add(New);
        Edit.add(Cut);
        Edit.add(Copy);
        Edit.add(Paste);
        Edit.add(Close);
        mb.add(File);
        mb.add(Edit);
        f.setJMenuBar(mb);

        // l = new JLabel("no file selected");
        // f.add(l);

        f.setLayout(null);
        f.setSize(600, 500);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {

        // Copy paste and cut
        if (e.getSource() == Cut)
            area.cut();
        if (e.getSource() == Copy)
            area.copy();
        if (e.getSource() == Paste)
            area.paste();

        // Open the file
        if (e.getSource() == Open) {
            JFileChooser chooseFile = new JFileChooser();
            int i = chooseFile.showOpenDialog(f);
            if (i == JFileChooser.APPROVE_OPTION) {
                File file = chooseFile.getSelectedFile(); // select the file
                String filePath = file.getPath(); // get the file path
                String fileName = file.getName(); // get the file name
                f.setTitle(fileName);

                try {
                    BufferedReader readFile = new BufferedReader(new FileReader(filePath));
                    String tempString1 = "";
                    String tempString2 = "";

                    while ((tempString1 = readFile.readLine()) != null)
                        tempString2 += tempString1 + "\n";

                    area.setText(tempString2);
                    readFile.close();
                } catch (Exception ae) {
                    ae.printStackTrace();
                }
            }
        }

        // Save
        if (e.getSource() == Save){
            JFrame jj = new JFrame();
 
            JFileChooser fileChooser = new JFileChooser();
            fileChooser.setDialogTitle("Specify a file to save");   
 
            int userSelection = fileChooser.showSaveDialog(jj);
 
            String filePath=null;
            if (userSelection == JFileChooser.APPROVE_OPTION) {
                File fileToSave = fileChooser.getSelectedFile();
                System.out.println("Save as file: " + fileToSave.getAbsolutePath());
                filePath = fileToSave.getAbsolutePath();
            }
            String fileContent = area.getText();

        try {
            BufferedWriter writeContent = new BufferedWriter(new FileWriter(filePath));
            writeContent.write(fileContent);
            writeContent.close();
            JOptionPane.showMessageDialog(f,"File Successfully saved!");
        }catch (Exception ex){
            ex.printStackTrace();
        }
        }
        // New 
        if (e.getSource() == New)
            area.setText("");

        // Exit 
        if (e.getSource() == Close) {
            System.exit(0);
        }
    }

    // Save the file
    public void saveTheFile() {
        JPanel saveFileOptionWindow = new JPanel(new GridLayout(2, 1));
        JLabel fileLabel = new JLabel("Filename      :- ");
        JLabel dirLabel = new JLabel("Save File To :- ");
        JTextField fileName = new JTextField();
        JTextField dirName = new JTextField();

        saveFileOptionWindow.add(fileLabel);
        saveFileOptionWindow.add(fileName);
        saveFileOptionWindow.add(dirLabel);
        saveFileOptionWindow.add(dirName);

        JOptionPane.showMessageDialog(f, saveFileOptionWindow); // show the saving dialogue box
        String fileContent = area.getText();
        String filePath = dirName.getText();

        try {
            BufferedWriter writeContent = new BufferedWriter(new FileWriter(filePath));
            writeContent.write(fileContent);
            writeContent.close();
            JOptionPane.showMessageDialog(f, "File Successfully saved!");
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    public static void main(String ar[]) {
        new menu();
    }
}
