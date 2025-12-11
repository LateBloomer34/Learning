// we have a array of 15 number, and we need to print 5 unique element everyTime

// let arr = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
// let set = new Set();
// while(set.size<5){
//     let randomIndex = Math.floor(Math.random()*arr.length);
//     set.add( arr[randomIndex])

// }
// console.log(...set);




const questionbank = [
  {
    Question: "Who is known as the 'God of Cricket'?",
    Option: ["Virat Kohli", "Sachin Tendulkar", "Ricky Ponting", "Brian Lara"],
    CorrectAnswer: "Sachin Tendulkar"
  },
  {
    Question: "Which country won the first Cricket World Cup in 1975?",
    Option: ["Australia", "India", "West Indies", "England"],
    CorrectAnswer: "West Indies"
  },
  {
    Question: "How many players are there in a cricket team?",
    Option: ["10", "11", "12", "15"],
    CorrectAnswer: "11"
  },
  {
    Question: "Who was the captain when India won the 2011 Cricket World Cup?",
    Option: ["Sourav Ganguly", "Virat Kohli", "MS Dhoni", "Rahul Dravid"],
    CorrectAnswer: "MS Dhoni"
  },
  {
    Question: "Which bowler has taken the most wickets in Test cricket?",
    Option: ["Muttiah Muralitharan", "Shane Warne", "James Anderson", "Anil Kumble"],
    CorrectAnswer: "Muttiah Muralitharan"
  },
  {
    Question: "Which batsman scored the fastest T20I century?",
    Option: ["Chris Gayle", "David Miller", "Rohit Sharma", "AB de Villiers"],
    CorrectAnswer: "David Miller"
  },
  {
    Question: "Where is the headquarters of the International Cricket Council (ICC) located?",
    Option: ["Melbourne", "Dubai", "London", "Mumbai"],
    CorrectAnswer: "Dubai"
  },
  {
    Question: "Which country hosts the Ashes series along with England?",
    Option: ["India", "South Africa", "Australia", "New Zealand"],
    CorrectAnswer: "Australia"
  },
  {
    Question: "Who holds the record for the highest individual score in ODI cricket?",
    Option: ["Martin Guptill", "Chris Gayle", "Rohit Sharma", "Virender Sehwag"],
    CorrectAnswer: "Rohit Sharma"
  },
  {
    Question: "Which Indian bowler took a hat-trick in the 2019 World Cup?",
    Option: ["Jasprit Bumrah", "Mohammed Shami", "Bhuvneshwar Kumar", "Kuldeep Yadav"],
    CorrectAnswer: "Mohammed Shami"
  },
  {
    Question: "Who is the first player to score 10,000 runs in ODI cricket?",
    Option: ["Ricky Ponting", "Sanath Jayasuriya", "Sachin Tendulkar", "Brian Lara"],
    CorrectAnswer: "Sachin Tendulkar"
  },
  {
    Question: "Which team has won the most IPL titles?",
    Option: ["CSK", "MI", "KKR", "RCB"],
    CorrectAnswer: "MI"
  },
  {
    Question: "What is the length of a cricket pitch?",
    Option: ["20 yards", "22 yards", "24 yards", "18 yards"],
    CorrectAnswer: "22 yards"
  },
  {
    Question: "Who was the first captain of the Indian Test team?",
    Option: ["CK Nayudu", "Vijay Hazare", "Lala Amarnath", "Nawab Pataudi"],
    CorrectAnswer: "CK Nayudu"
  },
  {
    Question: "Which country did India defeat in the 1983 World Cup final?",
    Option: ["Australia", "West Indies", "Pakistan", "England"],
    CorrectAnswer: "West Indies"
  },
  {
    Question: "Who has the most sixes in international cricket?",
    Option: ["Rohit Sharma", "Shahid Afridi", "Chris Gayle", "MS Dhoni"],
    CorrectAnswer: "Rohit Sharma"
  },
  {
    Question: "Which bowler delivered the first ever ball in IPL history?",
    Option: ["Zaheer Khan", "Praveen Kumar", "Sreesanth", "Shane Warne"],
    CorrectAnswer: "Praveen Kumar"
  },
  {
    Question: "Which country won the ICC T20 World Cup 2022?",
    Option: ["England", "India", "Australia", "Pakistan"],
    CorrectAnswer: "England"
  },
  {
    Question: "Which cricketer is known as 'The Wall'?",
    Option: ["Rahul Dravid", "Hashim Amla", "Kane Williamson", "Alastair Cook"],
    CorrectAnswer: "Rahul Dravid"
  },
  {
    Question: "Who is the first batsman to hit six sixes in an over in international cricket?",
    Option: ["Herschelle Gibbs", "Yuvraj Singh", "Garfield Sobers", "Chris Gayle"],
    CorrectAnswer: "Herschelle Gibbs"
  }
];

function questionGenerator(questionbank){
  // crete a set to store unique data 
  let questionSet = new Set();
    
    // cache is we have to store only 5 question
  while(questionSet.size<5){
    let randomQueIndex = Math.floor(Math.random()*questionbank.length);
    questionSet.add(questionbank[randomQueIndex])
  }
  console.log([...questionSet])
}
questionGenerator(questionbank)

