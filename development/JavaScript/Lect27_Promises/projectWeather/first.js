let button = document.querySelector("#submitbutton");

button.addEventListener("click", (event) => {
    event.preventDefault();

    const place = document.querySelector("#inp").value.trim();
    const ele = document.getElementById("weatherInfo");

    if (place === "") {
        ele.innerText = "Please enter a location.";
        return;
    }

    const promise = fetch(`https://api.weatherapi.com/v1/current.json?key=36b21bef96024b74a7462334252711&q=${place}&aqi=yes`)
    
        promise.then((response)=> response.json())
        .then((data)=>{
            console.log(data);
            
            if (data.error) {
                ele.innerText = "Location not found!";
            } else {
                updateTemp(data);
            }
        })
        .catch(()=>{
            ele.innerText = "Something went wrong!";
        });
});

function updateTemp(data){
    let ele = document.getElementById("weatherInfo");

    ele.innerText =
`${data.location.name}, ${data.location.region}, ${data.location.country}

🌡️ Temperature: ${data.current.temp_c}°C
🌥️ Condition: ${data.current.condition.text}
💧 Humidity: ${data.current.humidity}%
🌬️ Wind: ${data.current.wind_kph} km/h`;
}