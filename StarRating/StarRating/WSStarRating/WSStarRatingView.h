//
//  WSStarRatingView.h
//  StarRating
//
//  Created by iMac on 16/12/27.
//  Copyright © 2016年 zws. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kBACKGROUND_STAR @"star_gray"
#define kFOREGROUND_STAR @"star_yellow"
#define kNUMBER_OF_STAR  5

@class WSStarRatingView;


@protocol StarRatingViewDelegate <NSObject>

@optional

-(void)starRatingView:(WSStarRatingView *)view score:(float)score;

@end




@interface WSStarRatingView : UIView

@property (nonatomic, readonly) int numberOfStar;
@property (nonatomic, weak) id <StarRatingViewDelegate> delegate;

/**
 *  Init TQStarRatingView
 *
 *  @param frame  Rectangles
 *  @param number 星星个数
 *
 *  @return TQStarRatingViewObject
 */
- (id)initWithFrame:(CGRect)frame numberOfStar:(int)number;

/**
 *  设置控件分数
 *
 *  @param score     分数，必须在 0 － 1 之间
 *  @param isAnimate 是否启用动画
 */
- (void)setScore:(float)score withAnimation:(bool)isAnimate;

/**
 *  设置控件分数
 *
 *  @param score      分数，必须在 0 － 1 之间
 *  @param isAnimate  是否启用动画
 *  @param completion 动画完成block
 */
- (void)setScore:(float)score withAnimation:(bool)isAnimate completion:(void (^)(BOOL finished))completion;

@end
