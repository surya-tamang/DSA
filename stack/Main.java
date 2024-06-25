import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Stack stack = new Stack(5);
        Scanner sc = new Scanner(System.in);
        int value;
        do {
            System.out.println("1)Push 2)Pop 3)Peek 0)Exist");
            int ch = sc.nextInt();

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

class Stack {
    private int Max;
    private int[] array;
    private int top;

    public Stack(int size) {
        this.Max = size;
        this.array = new int[Max];
        this.top = -1;
    }

    public void push(int data) {
        if (top == Max - 1) {
            System.out.println("Stack overflow");
        } else {
            top++;
            array[top] = data;
        }
    }

    public int pop() {
        if (top == -1) {
            System.out.println("Stack underflow");
            return -1;
        } else {
            top--;
            return array[top];
        }
    }

    public int peek() {
        if (top == -1) {
            System.out.println("stack is empty");
            return -1;
        } else {
            return array[top];
        }
    }
}