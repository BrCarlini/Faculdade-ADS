/*
Escreva um algoritmo capaz de calcular o 
salário de um trabalhador com base na 
quantidade de horas trabalhadas e o valor de 
cada hora.
*/

let horasTrabalhadas = parseFloat(prompt('Informe a quantidade de horas trabalhadas: '))

let valorHora = parseFloat(prompt('Informe o valor(R$) do seu trabalho por hora: '))

let op = horasTrabalhadas * valorHora

alert(`O seu salário é de R$${op}`)