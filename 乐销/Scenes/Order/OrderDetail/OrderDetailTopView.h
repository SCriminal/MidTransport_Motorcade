//
//  OrderDetailTopView.h
//  Driver
//
//  Created by 隋林栋 on 2018/12/6.
//Copyright © 2018 ping. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OrderDetailTopView : UIView
//属性
@property (strong, nonatomic) UILabel *labelBill;
@property (strong, nonatomic) UILabel *labelBillNo;
@property (strong, nonatomic) UILabel *labelOrderNo;
@property (strong, nonatomic) UILabel *labelOrderType;
@property (strong, nonatomic) UILabel *labelShipCompanyName;
@property (strong, nonatomic) UILabel *labelShipName;
@property (strong, nonatomic) UILabel *labelShipNumber;
@property (strong, nonatomic) UILabel *labelZhongcheyun;

@property (strong, nonatomic) UIImageView *ivBg;
@property (nonatomic, strong) ModelOrderList *model;

#pragma mark 刷新view
- (void)resetViewWithModel:(ModelOrderList *)model;
@end

@interface OrderDetailStatusView : UIView
//属性
@property (strong, nonatomic) UILabel *labelStatus;
@property (strong, nonatomic) UIImageView *ivBg;
@property (nonatomic, strong) NSArray *aryDatas;

#pragma mark 刷新view
- (void)resetViewWithAry:(NSArray *)ary;
@end

@interface OrderDetailPathView : UIView
//属性
@property (strong, nonatomic) UILabel *labelPath;
@property (nonatomic, strong) UILabel *labelAddressFrom;
@property (nonatomic, strong) UILabel *labelAddressTo;
@property (strong, nonatomic) UIImageView *ivBg;

#pragma mark 刷新view
- (void)resetViewWithModel:(ModelOrderList *)model;
@end

@interface OrderDetailLoadView : UIView
//属性
@property (strong, nonatomic) UILabel *labelTitle;
@property (strong, nonatomic) UIImageView *ivBg;
@property (nonatomic, strong) ModelOrderList *model;

#pragma mark 刷新view
- (void)resetViewWithModel:(ModelOrderList *)model;
@end

@interface OrderDetailStationView : UIView
//属性
@property (strong, nonatomic) UILabel *labelTitle;
@property (strong, nonatomic) UIImageView *ivBg;
@property (nonatomic, strong) ModelOrderList *model;

#pragma mark 刷新view
- (void)resetViewWithModel:(ModelOrderList *)model;
@end


@interface OrderDetailRemarkView : UIView
//属性
@property (strong, nonatomic) UILabel *labelTitle;
@property (strong, nonatomic) UILabel *labelSubTitle;
@property (strong, nonatomic) UIImageView *ivBg;
#pragma mark 刷新view
- (void)resetViewWithModel:(ModelOrderList *)model;

@end
