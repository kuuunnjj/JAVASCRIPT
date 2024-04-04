let carticon = document.querySelector(".s1-Right")
let closebtn = document.querySelector(".close-btn")
let body = document.querySelector("body")
let productdetails = document.querySelector(".cart-Iteam")

let eachCard = document.querySelector(".item-at-cart")
let iconcartspan = document.querySelector(".cartCount")

let Listproducts = []
let carts = []
carticon.addEventListener("click", () => {
    body.classList.toggle("showCart")
})
closebtn.addEventListener("click", () => {
    body.classList.toggle("showCart")
})

const addDataToHTML = () => {
    productdetails.innerHTML = ""
    if (Listproducts.length > 0) {
            Listproducts.map(product => {
            let newProduct = document.createElement("div")
            newProduct.classList.add("cart-Iteam1")
            newProduct.dataset.id = product.id
            newProduct.innerHTML = `
            <img src="${product.img}"/>
            <h1>${product.name}</h1>
            <p>${product.price}</p>
            <button class="bth-click">Add to cart</button>`
            productdetails.appendChild(newProduct)
        })
    }
}

productdetails.addEventListener("click",(event)=>{
    let whereclick = event.target
    if(whereclick.classList.contains("bth-click")){
        let productId = whereclick.parentElement.dataset.id
        addToCart(productId)
        iconcartspan.innerHTML = + iconcartspan.innerHTML + 1
    }
})

const addToCart = (productId) => {
    carts = [...carts, productId]
    eachCard.innerHTML = ''
    carts.forEach(productId => {

        console.log(productId,Listproducts)
        const product = Listproducts.find((ele) => ele.id === +productId)
        let newProduct = document.createElement("div")
        newProduct.classList.add("item-at-cart-1")
        newProduct.dataset.id = product.id
        newProduct.innerHTML = `
        <img src="${product.img}"/>
        <h2>${product.name}</h2>
        <p>${product.price}</p>
        <div class="qty">
        <i class="ri-arrow-left-s-line less"></i>
        <p class="chngeNum">1</p>
        <i class="ri-arrow-right-s-line more"></i>
        </div>`
        eachCard.appendChild(newProduct)
    })

    if(carts.length <= 0){

    }
}



const initproductapi = () => {
    fetch("products.json")
        .then(response => response.json())
        .then(data1 => {
            console.log(data1)
            Listproducts = data1;
            addDataToHTML()
        })

}
initproductapi()