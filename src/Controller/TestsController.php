<?php
namespace App\Controller;

use App\Controller\AppController;
use Cake\ORM\TableRegistry;
/**
 * Users Controller
 *
 * @property \App\Model\Table\UsersTable $Users
 *
 * @method \App\Model\Entity\User[]|\Cake\Datasource\ResultSetInterface paginate($object = null, array $settings = [])
 */
class TestsController extends AppController
{
    
    
    public function initialize()
    {
        parent::initialize();
        // Add the 'add' action to the allowed actions list.
        $this->loadComponent('Flash');
        $this->loadComponent('RequestHandler');
    }
    
    public function index()
    {
        $articles = TableRegistry::get('Countries');
        $countries = $articles
            ->find('list')
            ->select('name')
            /*->where(['status =' => 1])*/
            ->order(['name' => 'ASC']);//->fetchAll('assoc');
        //$this->set(compact('countries'));
        $this->set('countries', $countries); 
    }
    
    public function getstates() 
    { 
       if ($this->request->is(array('ajax'))) 
        {
            $this->autoRender = false;
            if ($this->request->isPost()) {
            $country_id =  $this->request->data['country_id'];
            
            $states_table = TableRegistry::get('States');
            $states = $states_table->find('list', array(
                    'fields' => array('id','name'),
                    'conditions' => array('states.country_id' => $country_id)
                    ));
            header('Content-Type: application/json');
            echo json_encode($states);
            exit();
            }
        }
        
    }
    
    
    public function getcities() 
    { 
       if ($this->request->is(array('ajax'))) 
        {
            $this->autoRender = false;
            if ($this->request->isPost()) {
            $state_id =  $this->request->data['state_id'];
            
            $cities_table = TableRegistry::get('Cities');
            $cities = $cities_table->find('list', array(
                    'fields' => array('id','name'),
                    'conditions' => array('cities.state_id' => $state_id)
                    ));
            header('Content-Type: application/json');
            echo json_encode($cities);
            exit();
            }
        }
        
    }
    
    
    
}