//
//  MovieCell.h
//  Flix
//
//  Created by Kimora Kong on 6/28/18.
//  Copyright © 2018 Kimora Kong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@end
