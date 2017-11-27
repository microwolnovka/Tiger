#pragma once
#ifndef _TIGER_TRAINS_MODELS_POST_MODEL_H_
#define _TIGER_TRAINS_MODELS_POST_MODEL_H_


#include <models/PostType.h>

#include <string>


using std::string;


namespace tiger{
namespace trains{
namespace models{

    class PostModel{
        private:
            int idx = 0;
            PostType type = PostType::UNKNOWN;
            int armor = 0;
            string name;
            int population = 0;
            int product = 0;
        public:
            PostModel();
            PostModel(const int idx, const PostType type, const int armor, const string name,
                const int population, const int product);

            const int getIdx() const;
            const PostType getType() const;
            const int getArmor() const;
            const string getName() const;
            const int getPopulation() const;
            const int getProduct() const;

            void setIdx(const int idx);
            void setType(const PostType type);
            void setArmor(const int armor);
            void setName(const string name);
            void setPopulation(const int population);
            void setProduct(const int product);
    };
}
}
}



#endif