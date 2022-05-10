/* 
4. Crie uma função que receba dois valores e uma operação aritmética (string). Ela deve verificar a operação a
realizar e retornar o resultado adequado. Crie outra função que leia dois valores do usuário e a operação
(usando prompt), converta os valores para float, chame a função de cálculo passando os valores informados e
exiba o resultado usando alert. Chame a última função no clique de um elemento p (texto Calcular).
*/

function calculadora(num1, num2, operacao){
    let result = 0
    if(operacao == "+"){
        let adicao = num1 + num2
        result = adicao
    } else if(operacao == "-"){
        let subtracao = num1 - num2
        result = subtracao
    } else if(operacao == "x"){
        let multiplicacao = num1 * num2
        result = multiplicacao
    } else if(operacao == "/"){
        let divisao = num1 / num2
        result = divisao
    } else if(operacao == "**"){
        let exponencial = num1 ** num2
        result = exponencial
    }

    return result

}

function entradaDados(){
    let valor1 = Number(prompt("Informe o 1° valor: "))
    let valor2 = Number(prompt("Informe o 2° valor: "))
    let operacao = prompt("Opções para Operação Aritmética:\nDigite '+' para Somar.\nDigite '-' para Subtrair.\nDigite 'x' para Multiplicar.\nDigite '/' para Dividir.\nDigite '**' para Potência.")
    
    alert(`O resultado da sua operação é ${calculadora(valor1, valor2, operacao)}`)
}