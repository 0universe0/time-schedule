#include <iostream>
#include <string>
#include <vector>

    class day {
    
        public:

            day(std::string day); 
            ~day() {};
            void new_activity(std::string name, std::string time);
            void print_state();
            void print_to_file();
    
            std::string get_day();
        private:
            std::string d_day;
            std::vector<std::string> d_name;
            std::vector<std::string> d_time;
    };
