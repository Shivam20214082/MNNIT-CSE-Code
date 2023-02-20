import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;

class FileCrypto extends JFrame implements ActionListener {
    boolean fileNotFound = false;
    private Container c;
    private JLabel title;
    private JLabel fileLocation;
    private JLabel crypFileLoc;
    private JTextField tFileLoc;
    private JTextArea tCrypFileLoc;
    private JTextArea encryptionStatus;
    private JButton reset;
    private JButton quit;
    private JButton cyph1;
    private JButton cyph2;
    private JButton cyph3;
    private JButton cyph4;

    public FileCrypto() {
        setTitle("File Crypto");
        setBounds(200, 100, 600, 500);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        c = getContentPane();
        c.setBackground(Color.DARK_GRAY);
        c.setLayout(null);
        placeLabels();
        placeFields();
        placeButtons();
        setResizable(false);
        setVisible(true);
    }

    void placeLabels() {
        title = new JLabel("File Crypto");
        title.setForeground(Color.WHITE);
        title.setFont(new Font("Arial", Font.BOLD,
                30));
        title.setSize(300, 35);
        title.setLocation(225, 25);
        c.add(title);
        fileLocation = new JLabel("File Location : ");
        fileLocation.setFont(new Font("Arial",
                Font.PLAIN, 15));
        fileLocation.setSize(150, 20);
        fileLocation.setLocation(100, 100);
        fileLocation.setForeground(Color.WHITE);
        c.add(fileLocation);
        crypFileLoc = new JLabel("Encrypted File Location : ");
        crypFileLoc.setFont(new Font("Arial", Font.PLAIN, 15));
        crypFileLoc.setSize(200, 20);
        crypFileLoc.setLocation(25, 325);
        crypFileLoc.setForeground(Color.WHITE);
        c.add(crypFileLoc);
    }

    void placeFields() {
        tFileLoc = new JTextField();
        tFileLoc.setFont(new Font("Arial", Font.PLAIN, 15));
        tFileLoc.setSize(250, 20);
        tFileLoc.setLocation(200, 100);
        c.add(tFileLoc);
        tCrypFileLoc = new JTextArea();
        tCrypFileLoc.setFont(new Font("Arial", Font.PLAIN, 15));
        tCrypFileLoc.setSize(250, 20);
        tCrypFileLoc.setLocation(200, 325);
        c.add(tCrypFileLoc);
        encryptionStatus = new JTextArea();
        encryptionStatus.setFont(new Font("Arial", Font.PLAIN, 15));
        encryptionStatus.setSize(200, 20);
        encryptionStatus.setLocation(250, 435);

        encryptionStatus.setBackground(Color.DARK_GRAY);
        c.add(encryptionStatus);
    }

    void placeButtons() {
        cyph1 = new JButton("Caeser Cypher");
        cyph1.setFont(new Font("Arial", Font.BOLD, 15));
        cyph1.setSize(150, 50);
        cyph1.setLocation(125, 150);
        cyph1.addActionListener(this);
        c.add(cyph1);
        cyph2 = new JButton("Vigenere Cypher");
        cyph2.setFont(new Font("Arial", Font.BOLD, 15));
        cyph2.setSize(150, 50);
        cyph2.setLocation(325, 150);
        cyph2.addActionListener(this);
        c.add(cyph2);
        cyph3 = new JButton("Playfair Cypher");
        cyph3.setFont(new Font("Arial", Font.BOLD, 15));
        cyph3.setSize(150, 50);
        cyph3.setLocation(125, 225);
        cyph3.addActionListener(this);
        c.add(cyph3);
        cyph4 = new JButton("CSR Length Cypher");
        cyph4.setFont(new Font("Arial", Font.BOLD, 15));
        cyph4.setSize(150, 50);
        cyph4.setLocation(325, 225);
        cyph4.addActionListener(this);
        c.add(cyph4);
        quit = new JButton("Quit");
        quit.setFont(new Font("Arial", Font.BOLD, 15));
        quit.setForeground(Color.BLACK);
        quit.setSize(100, 50);
        quit.setLocation(175, 375);
        quit.addActionListener(this);
        c.add(quit);
        reset = new JButton("Reset");
        reset.setFont(new Font("Arial", Font.BOLD, 15));
        reset.setForeground(Color.RED);
        reset.setSize(100, 50);
        reset.setLocation(325, 375);
        reset.addActionListener(this);
        c.add(reset);
    }

    String cyphCaeser(String str, int ovrd) {
        int i, ka = 1, kn = 1, x = 0, l = str.length();
        str = str.toUpperCase();
        String ret = "";
        char n, ch;
        if (ovrd == -1) {
            ka = (int) Math.floor(26 * Math.random());
            kn = (int) Math.floor(9 * Math.random());
        } else if (ovrd >= 26) {
            ovrd %= 26;
            ka = ovrd;
            kn = (int) Math.ceil(ovrd / 3);
            if (ka == 0)
                ka = 1;
            if (kn == 0)
                kn = 1;
        }
        for (i = 0; i < l; i++) {
            ch = str.charAt(i);
            if (Character.isLetter(ch)) {
                n = (char) (ch + ka);
                if ((int) n > 90)
                    n = (char) ((int) n - 26);
                ret = ret + n;
            } else if (Character.isDigit(ch)) {
                n = (char) (ch + kn);
                if ((int) n > 57)
                    n = (char) ((int) n - 10);
                ret = ret + n;
            } else if (ch == ' ') {
                ret += " ";
            } else {
                ret = ret + ch;
            }
        }
        return ret;
    }

    String cyphVigenere(String str) {
        str = str.toUpperCase();
        String ret = "", wrd = "";
        str = str + " ";
        char ch;
        for (int i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            if (ch != ' ' && Character.isLetter(ch)) {
                ret += ("" + (int) ch);
            } else if (ch == ' ') {
                ret += " ";
            } else {
                ret = ret + ch;
            }
        }
        return ret;
    }

    String cyphPlayfair(String str) {
        Map<String, String> keymap = new HashMap<>();
        String key[][] = new String[5][5];
        str = str.toUpperCase();
        String ret = "";
        int i, j, k = 0;
        char ch;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                key[i][j] = ("" + (char) (k + 65));
                k++;
            }
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 5; j++) {
                keymap.put(key[i][j], key[j][i]);
                keymap.put(key[j][i], key[i][j]);
            }
        }
        for (i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            if (ch != ' ' && Character.isLetter(ch)) {
                ret += keymap.get(ch);
            } else if (ch == ' ') {
                ret += " ";
            } else {
                ret = ret + ch;
            }
        }
        return ret;
    }

    String cyphCSRL(String str) {
        str = str.toUpperCase();
        String ret = "", wrd = "";
        str = str + " ";
        int l = 0, i;
        char ch;
        for (i = 0; i < str.length(); i++) {
            ch = str.charAt(i);
            if (ch != ' ' && Character.isLetter(ch)) {
                wrd += ch;
                l++;
            } else if (!Character.isLetter(ch)) {
                ret = ret + ch;
            } else if (ch == ' ') {
                ret += " ";
            } else {
                ret += cyphCaeser(wrd, l);
                wrd = "";
                l = 0;
            }
        }
        return ret;
    }

    String readFile(String filePath) {
        String tmp = "";
        String t = "";
        FileReader fr = null;
        BufferedReader br = null;
        try {
            fr = new FileReader(filePath);
            br = new BufferedReader(fr);
            while ((t = br.readLine()) != null) {
                tmp += t;
                tmp += "\n";
            }
        } catch (Exception e1) {
            System.out.println(e1);
            fileNotFound = true;
            encryptionStatus.setForeground(Color.RED);
            encryptionStatus.setText("File Not Found!");
        } finally {
            try {
                br.close();
                fr.close();
            } catch (Exception e2) {
                System.out.println(e2);
            }
        }
        return tmp;
    }

    String writeToFile(String filePath, String data) {
        FileWriter fw = null;
        BufferedWriter bw = null;
        try {
            String fn = "enc_" + filePath.substring(filePath.lastIndexOf('/') + 1);
            String fp = filePath.substring(0, filePath.lastIndexOf('/') + 1);
            filePath = fp + fn;
            fw = new FileWriter(filePath, false);
            bw = new BufferedWriter(fw);
            bw.write(data);
            bw.write("\n\n");
            bw.flush();
            fw.flush();
        } catch (Exception e1) {
            System.out.println(e1);
            fileNotFound = true;
            encryptionStatus.setForeground(Color.RED);
            encryptionStatus.setText("File Not Found!");
        } finally {
            try {
                bw.close();
                fw.close();
            } catch (Exception e2) {
                System.out.println(e2);
                return "";
            }
        }
        if (fileNotFound)
            return "";
        else
            return filePath;
    }

    public void actionPerformed(ActionEvent e) {
        Object choice = e.getSource();
        String filePath = "", out = "", crypt = "";
        if (choice == quit) {
            System.exit(0);
        } else if (choice == reset) {
            tFileLoc.setText("");
            tCrypFileLoc.setText("");
            encryptionStatus.setText("");
        } else {
            filePath = tFileLoc.getText();
            if (choice == cyph1) {
                crypt = cyphCaeser(readFile(filePath),
                        -1);
                out = writeToFile(filePath, crypt);
                tCrypFileLoc.setText(out);
            }
            if (choice == cyph2) {
                crypt = cyphVigenere(readFile(filePath));
                out = writeToFile(filePath, crypt);
                tCrypFileLoc.setText(out);
            }
            if (choice == cyph3) {
                crypt = cyphPlayfair(readFile(filePath));
                out = writeToFile(filePath, crypt);
                tCrypFileLoc.setText(out);
            }
            if (choice == cyph4) {
                crypt = cyphCSRL(readFile(filePath));
                out = writeToFile(filePath, crypt);
                tCrypFileLoc.setText(out);
            }
            if (fileNotFound) {

                encryptionStatus.setForeground(Color.RED);
                encryptionStatus.setText("File Not Found!");
            } else {

                encryptionStatus.setForeground(Color.GREEN);
                encryptionStatus.setText("Encryption Success!");
            }
            return;
        }
    }
}

class filel {
    public static void main(String[] args) throws Exception {
        FileCrypto f = new FileCrypto();
    }
}