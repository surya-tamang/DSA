import java.util.Scanner;

public class LineQueue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Queue q = new Queue(5);
        int ch;

        do {
            System.out.println("1)Enqueue 2)Dequeue 3)Display 0)Exist");
            System.out.println("Enter your choice: ");
            ch = sc.nextInt();
            switch (ch) {
                case 1:
                    System.out.println("Enter the item:");
                    int item = sc.nextInt();
                    q.enqueue(item);
                    break;

                case 2:
                    q.dequeue();
                    break;

                case 3:
                    q.display();
                    break;

                default:
                    System.out.println("Invalid choice !!");
                    break;
            }
        } while (ch != 0);

        sc.close();
    }
}

class Queue {
    private int rear, front;
    private int max;
    private int[] queue;

    public Queue(int max) {
        this.rear = this.front = -1;
        this.max = max;
        this.queue = new int[max];
    }

    public void enqueue(int item) {
        if (rear <= max - 1) {
            if (front == -1 && rear == -1) {
                front = 0;
                rear = 0;
                queue[rear] = item;
            } else {
                rear++;
                queue[rear] = item;
            }
        } else {
            System.out.println("The queue is full");

        }
    }

    public void dequeue() {
        int item;
        if (front == -1 && rear == -1) {
            System.out.println("The queue is empty");
        } else {
            item = queue[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
                System.out.println("Deleted item is " + item);
            }
        }
    }

    public void display() {
        if (front == -1 && rear == -1) {
            System.out.println("The queue is empty");
        } else {
            System.out.print("Queue: ");
            for (int i = front; i <= rear; i++) {
                System.out.print(queue[i] + " ");
            }
            System.out.println();
        }
    }
}