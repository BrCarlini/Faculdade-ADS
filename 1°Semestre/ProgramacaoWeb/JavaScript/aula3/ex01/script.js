/*
1. Crie uma caixa de texto e um botão. A cada vez que o botão for clicado, deve adicionar o 
texto da caixa de texto em um elemento p abaixo do botão (e dos textos já existentes, se 
houver).
*/

function clique(){
    const campo1 = document.getElementById('campo1')
    const valorCampo1 = campo1.value

    let pElemento = document.createElement('p')

    document.body.appendChild(pElemento)

    pElemento.style.marginLeft = "200px"

    pElemento.innerText = valorCampo1
}