//
//  goodslist.h
//  zxics
//
//  Created by johnson on 14-8-11.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface goodslist : UIViewController
{
    NSMutableArray *list;
    NSInteger page;
}
@property (weak, nonatomic) IBOutlet UICollectionView *goodscollectionview;
@property (weak, nonatomic) IBOutlet UINavigationBar *UINavigationBar;

@end
