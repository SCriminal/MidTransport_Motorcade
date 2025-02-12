//
//  PerfectSelectCell.h
//中车运
//
//  Created by 隋林栋 on 2018/10/24.
//Copyright © 2018年 ping. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PerfectSelectCell : UITableViewCell

@property (nonatomic, strong) UIImageView *ivArrow;
@property (strong, nonatomic) UILabel *title;
@property (strong, nonatomic) UILabel *subTitle;
@property (strong, nonatomic) UILabel *essential;
@property (nonatomic, strong) ModelBaseData *model;
@property (nonatomic, assign) double subTitleInterval;

#pragma mark 刷新cell
- (void)resetCellWithModel:(ModelBaseData *)model;


@end
