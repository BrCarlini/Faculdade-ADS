/*
3. Crie uma caixa de texto e um botão. A cada vez que o botão for clicado, deve adicionar uma 
imagem na página (a sua escolha)
*/

function clique(){
    let imgElemento = document.createElement('img')
    let caixaImg = document.querySelector('div#res')

    imgElemento.setAttribute('src', 'dog.jpg')
    //imgElemento.src = 'dog.jpg'
    
    caixaImg.appendChild(imgElemento)
    //document.body.appendChild(imgElemento)

}