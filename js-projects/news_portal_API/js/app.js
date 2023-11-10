const loadNewsAsync = async () =>{
    const url = 'https://openapi.programming-hero.com/api/news/categories';
    const res = await fetch(url);
    const data = await res.json();
    displayNewsList(data.data.news_category);
}

const loadTargetNewsAsync = async (id) =>{
    const url = `https://openapi.programming-hero.com/api/news/category/${id}`;
    const res = await fetch(url);
    const data = await res.json();
    displayNews(data.data);
}

const extrack = async(id) =>{
    
    const url = `https://openapi.programming-hero.com/api/news/${id}`;
    const res = await fetch(url);
    const data = await res.json();
    console.log(data.data);
    displayNewDetail(data.data[0]);

}
const displayNewDetail = (detail) =>{
    const modalLabel = document.getElementById('extrackModalLabel');
    console.log(detail.title);
    modalLabel.innerText = detail.title;
    const modalBody = document.getElementById('modal-body');
    modalBody.innerHTML = `
        <p>${detail.details} </p>
    `
}


const displayNews = async (newsList) =>{
    console.log(newsList);
    const showNews = document.getElementById('show-news');
    showNews.innerHTML ='';
    
    if(newsList.length == 0){
        showNews.innerHTML = `
        <h3 class=" text-center mx-auto">News not available, try others!! </h3>
        `
    }

    for(const news of newsList){
        //console.log(news.length);
        const newsDiv = document.createElement('div');
        
        //<div class="card mb-3 mx-auto" style="max-width: 80%;">
        newsDiv.classList.add('card');
        newsDiv.classList.add('mb-3');
        newsDiv.classList.add('mx-auto');
        newsDiv.classList.add('card-w');
        newsDiv.classList.add('shadow-sm');
        newsDiv.classList.add('bg-body-tertiary');

        
        
        newsDiv.innerHTML=`
        
        <div class="row g-0">
          <div class="col-xl-4 col-lg-6 col-md-12">
            <img src="${news.image_url}" class="img-fluid rounded-start" alt="...">
          </div>
          <div class="col-xl-8 col-lg-6 col-md-12">
            <div class="card-body">
              <h5 class="card-title">${news.title}</h5>
              <p class="card-text">${news.details.slice(0,100)}<span  data-bs-toggle="modal" data-bs-target="#extrackModal" onclick="extrack('${news._id}')">...</span></p>
              
                <ul  style="list-style: none; transform: translateX(-40px);" class="d-flex justify-content-between align-items-center me-2">
                    <li  class="d-flex align-items-center">
                        <img class="img-st m-2" src="${news.author.img}" alt="">
                        <div style="font-size:14px;" >
                            <div class="">${news.author.name}</div>
                            <div class="">${news.author.published_date}</div>
                        </div>
                    
                    </li class="">
                    <li style="font-weight: bold">${news.total_view}M</li>
                    <li class="">${news.rating.badge}</li>
                </ul>
            </div>
          </div>
        </div>
        `
        showNews.appendChild(newsDiv);
    }

}


const displayNewsList = async(newsCategoryList) =>{
   
    const newsList = document.getElementById('news-list');
    newsList.innerText ='';
   for(const news of newsCategoryList){
    
        const li = document.createElement('li');
        li.classList.add('news-category');
        li.classList.add('m-2');
        li.innerText = news.category_name;
        newsList.appendChild(li);
   }

   const newsCategory = document.getElementsByClassName('news-category');
     //console.log(newsCategory);
     for(const category of newsCategory){
        category.addEventListener('click',function(event){
            
            const targetNews = event.target.innerText;
            for(const news of newsCategoryList){
                if(targetNews == news.category_name){
                    loadTargetNewsAsync(news.category_id);
                }
                
            }

        })
     }
}



document.getElementById('news-loader').addEventListener('click', function(){
    loadNewsAsync();
     
})
