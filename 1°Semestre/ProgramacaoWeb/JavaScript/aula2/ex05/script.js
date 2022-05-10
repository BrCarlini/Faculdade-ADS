/* 
5. Elabore uma página contendo uma caixa de texto e um botão. Quando o botão for clicado, a caixa de texto deve
receber a mensagem “Olá, mundo!”.
*/

function clickText(){
    let elemento = document.querySelector('input[id="areaText"]')
    elemento.value = "Olá, Mundo"
}