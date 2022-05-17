/*
2. Crie uma caixa de texto e um botão. A cada vez que o botão for clicado, deve adicionar ou 
substituir um h3 com o texto da caixa de texto abaixo do botão.
*/

function clique(){
    const campo1 = document.getElementById('campo1') // Pega o elemento de texto
    const valorCampo1 = campo1.value // Pega o valor do elemento

    let h3Elemento = document.createElement('h3') // Cria uma tag h3

    document.body.appendChild(h3Elemento) // Adiciona a tag criada no HTML

    h3Elemento.style.marginLeft = "200px"

    h3Elemento.innerText = valorCampo1 // Faz ela ser exibida na tela

    if(valorCampo1 != ""){
        h3Elemento = document.removeChild
        document.body.appendChild(h3Elemento)
    }else{
        
    }

}