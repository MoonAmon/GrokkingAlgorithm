```pseudo 
function search_number(list, number_searched) {
    set low_number to 0
    set high_number to len(list)

    while (low_number <= high_number) {
       set middle_number to (high_number + low_number) / 2 
       set bet_number to list[middle_number]

       if (bet_number == number_searched) {
        return bet_number
       }
       if (bet_number > number_searched) {
        high_number = middle_number - 1 
       }
       else {
        low_number = middle_number + 1
       }   

    }
}