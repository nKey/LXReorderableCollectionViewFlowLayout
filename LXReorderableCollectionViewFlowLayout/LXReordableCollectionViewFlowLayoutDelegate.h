#import <UIKit/UIKit.h>

@protocol LXReordableCollectionViewFlowLayoutDelegate <NSObject>

- (void)didBegingMovingCoverViewRelatedToCollectionViewIndexPath:(NSIndexPath *)indexPath;
- (void)didMoveCoverViewWithGestureRecognizer:(UIPanGestureRecognizer *)recognizer;
- (void)didEndMovingCoverViewWithGestureRecognizer:(UILongPressGestureRecognizer *)recognizer;

@end
