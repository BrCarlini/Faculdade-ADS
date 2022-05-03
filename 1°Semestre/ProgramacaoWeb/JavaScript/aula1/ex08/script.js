/*
Crie um algoritmo que leia a cotação do dólar e a 
quantidade de dólares. Converta o valor para real e 
mostre o resultado.
*/

let cotacaoDolar = Number(prompt('Informe a cotação do Dolar: '))
let valorDolar = Number(prompt('Informe a quantidade de dólares que deseja converter para real: '))

const conversao = valorDolar * cotacaoDolar

alert(`Valor em dolar $${valorDolar} covertidos em real fica R$${conversao}`)