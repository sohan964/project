//step-1
document.getElementById('btn-submit').addEventListener('click',function(){
    //step-2: get Email
    const emailField = document.getElementById('user-email');
    const email = emailField.value;
    
    //step3: get password
    const passwordField  = document.getElementById('user-password');
    const password = passwordField.value;
    
    //step4: verify email and password
    if(email == 'sohan@gmail.com' && password =='sohan'){
        window.location.href = 'bank.html'
    }
    else alert("Invalid user");
})
