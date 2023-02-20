import java.util.*;

class strig {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter First string");
        String a = s.nextLine();
        System.out.println("Enter Second string for comparasion");
        int l1 = a.length();
        String b = s.nextLine();
        int l2 = b.length();

        // Equal
        int k = 0;
        if (l1 != l2) {
            System.out.println("Strings are unequal");
        } else {
            for (int i = 0; i < l1; i++) {
                int x = (int) a.charAt(i);
                int y = (int) b.charAt(i);
                if (x != y) {
                    k = 1;
                    System.out.println("Strings are unequal");
                    break;
                }
            }
            if (k == 0) {
                System.out.println("Strings are equal");
            }
        }

        // Reverse
        System.out.println("Enter an string for reverse the string");
        String c = s.nextLine();
        int l3 = c.length();
        for (int i = l3 - 1; i >= 0; i--) {
            char x = c.charAt(i);
            System.out.print(x);

        }
        System.out.println("");

        // change case of String a
        System.out.println("Enter a string for changing case");
        String y = s.nextLine();
        int l4 = y.length();
        for (int i = 0; i < l4; i++) {
            int x = (int) y.charAt(i);
            if (x >= 65 && x <= 90) {
                System.out.print((char) ((int) y.charAt(i) + 32));
            } else if (x >= 97 && x <= 122) {
                System.out.print((char) ((int) y.charAt(i) - 32));
            } else {
                System.out.print((char) ((int) y.charAt(i)));
            }
        }

        // triming
        int p = 0, q = 0;
        System.out.println("\nEnter a string for trimming");
        String z = s.nextLine();
        int l5 = z.length();
        for (int i = 0; i < l5-2; i++) {
            int l = (int) z.charAt(i);
            int m = (int) z.charAt(i + 1);
            int n = (int) z.charAt(i + 2);
            if (l != 32 && ((m == 32 && n == 32) || (m == 32 && n == 0) || l == 0)) {
                q = i;
            }
        }
        while ((int) z.charAt(p) == 32) {
            p++;
        }
        for (int i = p; i <= q; i++) {
            int x = (int) z.charAt(i);
            System.out.print((char)x);
        }
        System.out.println("");
    }
}

//output
/*
Enter First string
Shivam kumar gupta
Enter Second string for comparasion
Shivam gupta
Strings are unequal
Enter an string for reverse the string
Shivam Kumar Gupta
atpuG ramuK mavihS
Enter a string for changing case
shivam kumar gupta
SHIVAM KUMAR GUPTA
Enter a string for trimming
  shivam kumar gupta  
shivam kumar gupta
*/
