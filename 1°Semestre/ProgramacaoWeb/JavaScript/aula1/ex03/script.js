let codigoPeca = parseInt(prompt('Informe o Código da peça: '))
let valorPeca = parseFloat(prompt('Informe o preço da peça: '))
let quantidadePeca = parseInt(prompt('Informe a quantidade'))

const op = valorPeca * quantidadePeca

alert(`A(s) peça(s) com o Código: #${codigoPeca} ficou em um valor total de R$${op}`)