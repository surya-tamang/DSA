package com;

public class Stack {
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