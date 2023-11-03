document.getElementById('select-player').addEventListener('click',function(event){
    const SelectPlayer = event.target.previousElementSibling.innerText;
    console.log(SelectPlayer);

    const PlayerList = document.getElementById('player-list');
    
    const playerCount = PlayerList.childElementCount;
    console.log(playerCount);
    const li = document.createElement('li');
    li.innerText = SelectPlayer;
    const liClassName = "list-group-item border-0 bg-black";
    li.classList.add("list-group-item");
    li.classList.add("border-0");
    li.classList.add("bg-black");
    li.classList.add("text-white");
    let totalPlayer;
    if(playerCount<5){
        
        PlayerList.appendChild(li)
    }

    
    
})

function inputFieldValue(elementId){
    const inputValue = document.getElementById(elementId);
    return parseFloat(inputValue.value);
}

function setValue(elementId,Value){
    const elementValue = document.getElementById(elementId);
    elementValue.innerText = Value;
    
}

document.getElementById('calculate').addEventListener('click',function(){
    const perAmount = inputFieldValue('per-amount-field');
    
    
    const PlayerList = document.getElementById('player-list');
    const playerCount = parseInt(PlayerList.childElementCount);
    const playerPrice = playerCount * perAmount;

    setValue('player-price', playerPrice);

})

document.getElementById('calculate-total').addEventListener('click',function(){
    const Manager = inputFieldValue('manager-field');
    const Coach = inputFieldValue('coach-field');

    const playerPrice = document.getElementById('player-price');
    const totalPlayerPrice = parseFloat(playerPrice.innerText);
    const totalPrice = Manager + Coach + totalPlayerPrice;

    setValue('total-amount',totalPrice);
    
})
