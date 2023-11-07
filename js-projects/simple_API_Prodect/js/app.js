const loadPhones = async (searchText, dataLimit) => {
    const url = `https://openapi.programming-hero.com/api/phones?search=${searchText}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPhones(data.data,dataLimit);
}
const displayPhones = (phones, dataLimit) => {
    const phoneContainer = document.getElementById('phone-container');
    phoneContainer.innerText = '';//erase previus search
    //it's will show only first 10 phone
    const showAll = document.getElementById('show-all');
    if(dataLimit && phones.length > 10){
        phones=phones.slice(0,10);
        
        showAll.classList.remove('d-none');
    }
    else showAll.classList.add('d-none');


    //no product found message
    const noPhone = document.getElementById('no-found-message');
    if(phones.length == 0){
        noPhone.classList.remove('d-none');
    }
    else noPhone.classList.add('d-none');
    phones.forEach(phone => { //displaying all phones
        const phoneDiv = document.createElement('div');
        phoneDiv.classList.add('col');
        phoneDiv.innerHTML = `
        <div class="card p-4">
         <img src="${phone.image}" class="card-img-top" alt="...">
          <div class="card-body">
            <h5 class="card-title">${phone.phone_name}</h5>
            <p class="card-text">This is a longer card with supporting text below as a natural lead-in to
                additional content. This content is a little bit longer.</p>
            <button onclick="loadPhoneDetails('${phone.slug}')" href="" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#phoneDetailModal"> show-details </button>

          </div>
        </div>
        `;
        phoneContainer.appendChild(phoneDiv);
    })
    //stop loader
    toggleSpinner(false);
}

const processSearch = (dataLimit) =>{
    //start loader
    toggleSpinner(true);
    const searchField = document.getElementById('search-field');
    const searchText = searchField.value;
    loadPhones(searchText,dataLimit);
}

//search btn
document.getElementById('btn-search').addEventListener('click',function(){
        processSearch(10);
})

//search input field enter key handler
document.getElementById('search-field').addEventListener('keypress', function(event){
    if(event.key == 'Enter'){
        processSearch(10);
    }
})

const toggleSpinner = (isLoding) =>{
    const loaderSection = document.getElementById('loader');
    if(isLoding){
        loaderSection.classList.remove('d-none');
    }
    else loaderSection.classList.add('d-none');
}

//not the best way to load show all
document.getElementById('btn-show-all').addEventListener('click', function(){
    processSearch();
})

const loadPhoneDetails = async(id) =>{
    const url =`https://openapi.programming-hero.com/api/phone/${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displayPhoneDetails(data.data);
}

const displayPhoneDetails = phone =>{
    console.log(phone);
    const modalTitle = document.getElementById("phoneDetailModalLabel");
    modalTitle.innerText = phone.name;

    const phoneDetails = document.getElementById('phone-details');
    phoneDetails.innerHTML = `
    <p>Release Data: ${phone.releaseDate ? phone.releaseDate : 'No Release Date found'}</p>
    `
}

loadPhones('phone');
