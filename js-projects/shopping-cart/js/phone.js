function updatePhoneTotalPrice(newPhoneNumber){
    const phoneTotalPrice = newPhoneNumber * 1219;
    const phoneTotalElement = document.getElementById('phone-total');
    phoneTotalElement.innerText = phoneTotalPrice;
}
function getTextElementValueById(elementId){
    const phoneTotalElement = document.getElementById(elementId);
    const currentPhoneTotal = parseInt(phoneTotalElement.innerText);
    return currentPhoneTotal;
}

document.getElementById('btn-phone-plus').addEventListener('click', function(){
    console.log('+');
       //reusing the function
       const newPhoneNumber =  updateCaseNumber('phone-number-field',true);
       updatePhoneTotalPrice(newPhoneNumber);

       //calculate total
       calculateSubTotal();

});

document.getElementById('btn-phone-minus').addEventListener('click',function(){
    console.log('-');
        //reusing the function
        const newPhoneNumber = updateCaseNumber('phone-number-field',false);
        updatePhoneTotalPrice(newPhoneNumber);
        calculateSubTotal();
});
