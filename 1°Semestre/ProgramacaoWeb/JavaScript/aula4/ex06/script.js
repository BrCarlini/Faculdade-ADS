/*
6. Escreva um programa que solicite 10 números e ao final exibe todos os números digitados e 
a média de todos eles.
*/

let lista = []
let acum = 0 

for(i = 1; i <= 10; i++){
    let dado = parseInt(prompt('Informe um número: '))
    lista.push(dado)
    acum += dado
}

alert(`Números informados: ${lista}\nMédia: ${acum / 10}`)