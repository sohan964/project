function updateCaseNumber(elementId,isIncrease){
    const caseNumberField = document.getElementById(elementId);

    const previousCaseNumber = parseInt(caseNumberField.value);

    let newCaseNumber;

    if(isIncrease == true){
        newCaseNumber = previousCaseNumber + 1;
    }
    else if(!isIncrease && previousCaseNumber<=0){
        newCaseNumber = 0;
    }
    else{
        newCaseNumber = previousCaseNumber - 1;
    }

    caseNumberField.value = newCaseNumber;

    return newCaseNumber;

}

function setTextElementValueById(elementId, value){
    const subTotalElement = document.getElementById(elementId);
       subTotalElement.innerText = value;
}

function calculateSubTotal(){
    const currentPhoneTotal = getTextElementValueById('phone-total');
       const currentCaseTotal = getTextElementValueById('case-total');
       
       const currentSubTotal = currentCaseTotal + currentPhoneTotal;
       const subTotalElement = document.getElementById('sub-total');
       subTotalElement.innerText = currentSubTotal;
        setTextElementValueById('sub-total',currentSubTotal);
       //calcutate tax
       const taxAmount = currentSubTotal * 0.1;
       setTextElementValueById('tax-amount',taxAmount);

       const finalAmount = currentSubTotal + taxAmount;
       setTextElementValueById('final-total', finalAmount);
}
