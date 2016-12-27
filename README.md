# StarRating
星星评分，评分星星

[GitHub: https://github.com/Zws-China/StarRating](https://github.com/Zws-China/StarRating)  


# PhotoShoot
![image](https://github.com/Zws-China/StarRating/blob/master/11111.gif)


# How To Use

```ruby

#import "WSStarRatingView.h"


WSStarRatingView *starRatingView = [[WSStarRatingView alloc] initWithFrame:CGRectMake(30, 200, self.view.frame.size.width-60, 50) numberOfStar:5];
starRatingView.delegate = self;
[self.view addSubview:starRatingView];

//StarRatingViewDelegate
- (void)starRatingView:(WSStarRatingView *)view score:(float)score
{
    scoreLabel.text = [NSString stringWithFormat:@"%0.1f分",score * 5 ];

}


```