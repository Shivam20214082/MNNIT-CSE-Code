//Shivam kumar gupta
//20214082
//CSE-D

import java.awt.*;
import java.awt.event.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;


public class mover extends Frame implements KeyListener {

    int x = 41, y = 51;

    public mover() {
        setSize(500, 500);

        addKeyListener(this);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }

    public void paint(Graphics g) {
        g.drawString("Object Will move By Arrow key             Position :: x=" + x + ", y=" + y+"\n\n", 40, 50);

        g.drawRect(40, 50, 400, 400);
        g.setColor(Color.CYAN);
        g.fillRect(x, y, 50, 30);
    }

    public void keyPressed(KeyEvent ke) {

        int keycode = ke.getKeyCode();
        // switch (keycode) {
        //     case keyEvent.VK_UP:
        //         if (y > 51) {
        //             y = y + 2;
        //         }
        //         break;
        //     case keyEvent.VK_DOWN:
        //         if (y < 420) {
        //             y = y + 2;
        //         }
        //         break;
        //     case keyEvent.VK_LEFT:
        //         if (x > 41) {
        //             x = x + 2;
        //         }
        //         break;
        //     case keyEvent.VK_RIGHT:
        //         if (x < 390) {
        //             x = x + 2;
        //         }
        //         break;

        // }
        if(keycode==KeyEvent.VK_UP){
            if (y > 51) {
                y = y - 2;
            }
        }
        if(keycode==KeyEvent.VK_DOWN){
            if (y < 420) {
                y = y + 2;
            }
        }
        if(keycode==KeyEvent.VK_LEFT){
            if (x > 41) {
                x = x - 2;
            }
        }
        if(keycode==KeyEvent.VK_RIGHT){
            if (x < 390) {
                x = x + 2;
            }
        }


        repaint();

    }

    public void keyReleased(KeyEvent ke) {

    }

    public static void main(String ar[]) {
        new mover().show();
    }

    @Override
    public void keyTyped(KeyEvent e) {
        // TODO Auto-generated method stub

    }

}