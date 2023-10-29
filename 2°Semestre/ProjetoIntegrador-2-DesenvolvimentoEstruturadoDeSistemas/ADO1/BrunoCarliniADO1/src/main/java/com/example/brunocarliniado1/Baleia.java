package com.example.brunocarliniado1;

public class Baleia {

    public Baleia(){

    }

    private String nome;
    private double peso;
    private double comprimento;

    public Baleia(String nomePadrao){
        this.nome = nomePadrao;
    }


    public String comer(String alimento){

        return this.nome + " está comendo " + alimento;
    }

    public String nadar(){
        return this.nome + "nadando";
    }

    public String getNome() {

        return nome;
    }

    public void setNome(String nome) {

        this.nome = nome;
    }

    public double getPeso() {

        return peso;
    }

    public void setPeso(double peso) {

        this.peso = peso;
    }

    public double getComprimento() {

        return comprimento;
    }

    public void setComprimento(double comprimento) {

        this.comprimento = comprimento;
    }
}
