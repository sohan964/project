
document.getElementById('btn-deposit').addEventListener('click', function(){
    
    const newDepositAmount = getInputFieldValueById('deposit-field');
    //console.log(newDepositAmount);

    const previousDepositTotal = getElementValueById('deposit-total');
    //console.log(previousDepositTotal);

    const newDepositTotal = previousDepositTotal + newDepositAmount;

    setTextElementValueById('deposit-total',newDepositTotal);

    const previousBalanceTotal = getElementValueById('balance-total');

    const newBalanceTotal = previousBalanceTotal + newDepositAmount;

    setTextElementValueById('balance-total', newBalanceTotal);

})