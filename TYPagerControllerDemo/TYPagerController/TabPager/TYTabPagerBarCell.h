//
//  TYTabTitleViewCell.h
//  TYPagerControllerDemo
//
//  Created by tany on 16/5/4.
//  Copyright © 2016年 tanyang. All rights reserved.
//

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@protocol TYTabPagerBarCellProtocol <NSObject>

/**
 font ,textColor will use TYTabPagerBarLayout's textFont,textColor
 */
@property (nonatomic, strong, readonly) UILabel *titleLabel;
@property (nonatomic, strong, readonly) UIImageView *imageViewIcon;

@end

@interface TYTabPagerBarCell : UICollectionViewCell<TYTabPagerBarCellProtocol>
@property (nonatomic, weak,readonly) UILabel *titleLabel;
@property (nonatomic, weak,readonly) UIImageView *imageViewIcon;

+ (NSString *)cellIdentifier;
@end
NS_ASSUME_NONNULL_END
