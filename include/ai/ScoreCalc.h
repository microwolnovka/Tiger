#ifndef _SCORE_CALC_BOT_H_
#define _SCORE_CALC_BOT_H_
#include <vector>
#include <map>
#include <world/World.h>
#include <ai/Post.h>
#include <ai/ArtMarket.h>
#include <ai/ArtTown.h>

namespace tiger
{
namespace trains
{
namespace ai
{

    class ScoreCalc
    {
    public:
        ScoreCalc(std::map<int, Post*> *postMap, const Post* startPost,  const Post* homePost, int maxTick);

        void setStartPost(const Post* startPost);
        void setStartProduct(const int product);

        double getScore(const std::vector<int> &vec);

        vector<const world::Point*> getLastPath() const;

    private:
        void reset();
        void goToMarket(const Post* post, ArtMarket artMarket, int &tick, int &products);
        void goToTown(const Post* post, ArtTown artTown, int &tick, int &products);

        std::map<int, Post*> *postMap;
        const Post* startPost;
        const Post* homePost;
        const int maxTick;
        int startProduct = 0;
        bool returned;

        std::map<int, ArtTown> artTownMap;
        std::map<int, ArtMarket> artMarketMap;

        vector<const world::Point*> path;

    };


}

}

}

#endif