package com.example.brunocarliniado1;

public class Main {

    public static void main(String[] args) {

        Baleia baleia1 = new Baleia();

        baleia1.setNome("Free Willy");
        String willy = baleia1.getNome();
        System.out.println(willy);




        Baleia baleia2 = new Baleia("bryde");

        System.out.println(baleia2.getNome());


    }
}
