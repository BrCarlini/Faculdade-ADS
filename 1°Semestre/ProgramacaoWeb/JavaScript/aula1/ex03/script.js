/* 
Identifique os dados de entrada, processamento e 
saída no algoritmo abaixo e o implemente: 
• Código da peça 
• Valor da peça 
• Quantidade da peça no pedido
• Calcule o valor total do pedido da peça 
• Apresente o código da peça e o valor do pedido
*/

let codigoPeca = parseInt(prompt('Informe o Código da peça: '))
let valorPeca = parseFloat(prompt('Informe o preço da peça: '))
let quantidadePeca = parseInt(prompt('Informe a quantidade'))

const op = valorPeca * quantidadePeca

alert(`A(s) peça(s) com o Código: #${codigoPeca} ficou em um valor total de R$${op}`)