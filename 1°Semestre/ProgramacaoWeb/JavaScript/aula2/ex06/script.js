/*
6. Elabore uma página com três campos de texto e um botão. Um dos campos de texto deve ser utilizado para
armazenar o nome e o outro o sobrenome. Quando o botão for clicado, nome + sobrenome deve ser colocado
na terceira caixa de texto.
*/

function coletaDados(){
    let nome = document.querySelector("input[id='name']")
    let valorNome = nome.value

    let sobrenome = document.querySelector("input[id='lastName']")
    let valorSobrenome = sobrenome.value

    let addCaixa = document.querySelector("input[id='nameFull']")

    addCaixa.value = `${valorNome} ${valorSobrenome}`
}