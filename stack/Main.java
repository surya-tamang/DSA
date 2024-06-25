import java.util.Scanner;

import com.Stack;

public class Main {
    public static void main(String[] args) {
        Stack stack = new Stack(5);
        Scanner sc = new Scanner(System.in);
        int value, ch;
        do {
            System.out.println("1)Push 2)Pop 3)Peek 0)Exist");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.println("enter the value to be pushed");
                    value = sc.nextInt();
                    stack.push(value);
                    break;

                case 2:
                    value = stack.pop();
                    System.out.println("deleted item is" + value);
                    break;

                case 3:
                    stack.peek();
                    break;

                default:
                    System.out.println("invalid choice");
            }
        } while (ch != 0);
        sc.close();
    }
}
