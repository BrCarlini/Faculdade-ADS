/*
5. Escreva um programa JavaScript que solicite 5 números ao usuário e, para cada número 
digitado, informe se este é par ou ímpar.
*/


for(i = 0; i <= 4; i++){
    let dado = parseInt(prompt("Informe um número: "))

    if(dado % 2 == 0){
        alert(`Número ${dado}: é par`)
    }else {
        alert(`Número ${dado}: é ímpar`)
    }
}
